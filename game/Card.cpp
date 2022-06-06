#include "Card.h"

// constructor initialize the card type and set the card can be used
Card::Card(const int& card_type) : type(static_cast<Type>(card_type)), selectable(true) {

}

// mutator that set whether the card can be used or not
void Card::set_selectable(bool k){
    this->selectable = k;
}

// accessors
const Card::Type Card::get_type() const{
    return type;
}

const bool Card::can_select() const{
    return selectable;
}

// for Qt display different type of card
string Card::typeToAddress() const
{
    switch (type) {
        case Card::Type::ACCOMPLICE:
            return ":/resources/images/Accomplice.png";
        case Card::Type::ALIBI:
            return ":/resources/images/Alibi.png";
        case Card::Type::BARTER:
            return ":/resources/images/Barter.png";
        case Card::Type::BASTET:
            return ":/resources/images/Bastet.png";
        case Card::Type::BYSTANDER:
            return ":/resources/images/Bystander.png";
        case Card::Type::CULPRIT:
            return ":/resources/images/Culprit.png";
        case Card::Type::DETECTIVE:
            return ":/resources/images/Detective.png";
        case Card::Type::FIRST_FINDER:
            return ":/resources/images/First_Finder.png";
        case Card::Type::INFO_EXCHANGE:
            return ":/resources/images/Information_Exchange.png";
        case Card::Type::JUVENILE:
            return ":/resources/images/Juvenile.png";
        case Card::Type::RUMOR:
            return ":/resources/images/Rumor.png";
        case Card::Type::WITNESS:
            return ":/resources/images/Witness.png";
    }

    return "";
}
