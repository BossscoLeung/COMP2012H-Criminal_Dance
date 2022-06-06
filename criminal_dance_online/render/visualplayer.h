#ifndef VISUALPLAYER_H
#define VISUALPLAYER_H

#include <QGraphicsItemGroup>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QGraphicsSceneHoverEvent>

#include "game/Player.h"

class VisualPlayer : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
public:
    VisualPlayer();

    void setCircle(QGraphicsEllipseItem *circle, bool is_turn, QGraphicsTextItem *name);

    void setPlayerIndex(int i);
    void setName(QString name);
    void setNumCard(int cards);
    void setNumCardChange(int change);
    void setIsAccomplice(bool k);
    void setIsInTurn(bool k);

    void setIsFirstPlayer(bool k);

    int getPlayerIndex();
    QString getName();
    int getNumCard();
    bool getIsAccomplice();

    bool getIsFirstPlayer();

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;

signals:
    void clicked();
    void entered(QString player_name, int num_cards_left, bool is_accomplice);

private:
    QGraphicsEllipseItem *circle;
    QGraphicsTextItem *name;

    int player_index;
    QString player_name;
    int cards_left;
    bool is_accomplice;
    bool is_in_turn;

    bool is_first_player;
};

#endif // VISUALPLAYER_H
