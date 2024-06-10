#ifndef WORKWITHUSER_H
#define WORKWITHUSER_H

//__________________________________________________________________________________________________________//

/**
*@brief showMenu - функция вывода главного меню
*@return choice - выбор пользователя
*@param *userChoice - выбор пользователя
*@param *difInput - выбор сложности
*/
int showMenu(int *userChoice,int *difInput);

//__________________________________________________________________________________________________________//

/**
*@brief drawField - функция отрисовки поля
*@param width - ширина поля
*@param length - высота поля
*@param **GRID_FE - бекэндовая сетка
*/
void drawField(int length, int width, char **GRID_FE);

//__________________________________________________________________________________________________________//

/**
*@brief showTips - функция вывода подсказок
*/
void showTips();

//__________________________________________________________________________________________________________//

/**
*@brief userInput - функция общения с пользователем
*@pointer x координата по Х
*@pointer у координата по У
*@pointer type тип клетки
*/
int userInput(int *x, int *y, char *type);

//__________________________________________________________________________________________________________//

/**
*@brief showLoseMessage - функция вывода сообщения о проигрыше
*/
void showLoseMessage();

//__________________________________________________________________________________________________________//

/**
*@brief showWinMessage - функция вывода сообщения о выигрыше
*/
void showWinMessage();

//__________________________________________________________________________________________________________//

/**
*@brief updateField - функция обновления поля для пользователя
*@param length - длина поля
*@param width - ширина поля
*@param *GRID_FE - флонтондовая сетка
*/
void updateField(char **GRID_FE, int length, int width);

//__________________________________________________________________________________________________________//

/**
*@brief showStats - функция вывода статистики
*@param length - длина поля
*@param width - ширина поля
*@param *GRID_FE - фронтэндовая сетка
*@param mineAmount - кол-во мин
*/
void showStats(char **GRID_FE, int length, int width, int mineAmount);

//__________________________________________________________________________________________________________//

/**
*@brief showErrors - функция вывода ошибок
*@param num_error - номер ошибки
*/
int showErrors(int num_error);

//__________________________________________________________________________________________________________//

/**
*@brief playAgain - функция, которая запрашивает ввод пользователя на повторную игру
*@return - true - если получен символ (Y/n); false, если получен любой другой символ
*/
bool playAgain();

//__________________________________________________________________________________________________________//

#endif