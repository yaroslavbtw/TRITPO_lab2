# Требования к проекту

## Введение

### 1.1 Назначение

В этом документе описаны функциональные и нефункциональные требования к приложению "Noted". Этот документ предназначен для команды, которая будет реализовывать и проверять корректность работы приложения.

### 1.2 Бизнес требования

#### 1.2.1 Исходные данные

Приложение "Заметки" является востребованным на любом устройстве, его функции необходимы для людей с плотным графиком дня, людей, страдающих от заболеваний связанных с потерей памяти, и просто для ежедневного использования.

#### 1.2.2 Возможности бизнеса

Чтобы помочь пользователям не забыть запланированные события можно создать приложение, дающее возможность создавать заметки, помогая людям пометить, или не забыть определенное событие.

#### 1.2.3 Границы проекта

"Noted" будет предоставляет пользователям функции создания и редактирования заметок, напоминаний, которые будут информировать пользователя о наступающем событии. Предусмотрена возможность регистрации для связи приложений на разных устройствах в пределах одного пользователя. Регистрация является необязательной, так как пользователь может использовать приложение в пределах одного устройства.

### 1.3 Аналоги

Известным аналогом, ориентированным на создание напоминаний, является входящее в базовую комплектацию операционной системы Windows 10 (поздних версий) [Microsoft To Do](https://todo.microsoft.com/tasks/).

---

## 2 Требования пользователя

### 2.1 Интерфейс пользователя

Главное окно, в котором отображаются созданные заметки

![Окно приложения](files/mockup.png)

### 2.2 Характеристики пользователей

#### 2.2.1 Классификация пользователей

**Не зарегистрированные** пользователи - пользователи не создавшие аккаунт, имеют доступ ко всем функциям приложения.    

**Зарегистрированные** пользователи - пользователи создавшие аккаунт, имеют доступ ко всем функциям приложения и возможность переноса своего аккаунта на другое устройство.

#### 2.2.2 Целевая аудитория

Пользователи, заинтересованные в создании заметок.

### 2.3 Предположения и зависимости

1. Приложение должно иметь удобный, дружественный для пользователя графический интерфейс.

2. Приложение должно иметь поддержку использования базы данных.

3. Приложение должно иметь возможность регистрации аккаунтов.

4. Доступ к приложение должен быть только на операционной системе Windows.

5. Подзадачи в заметках не планируются.

---

## 3 Системные требования

### 3.1 Функциональный требования

При открытии программы пользователь может зарегистрировать аккаунт либо отказаться, и пользоваться функциями программы: создание, редактирование заметок, сортировка заметок по основным параметрам (дата запланированного события, дата создания заметки, заголовок).

### 3.2 Нефункциональные требования

#### 3.2.1 Визуальный стиль

Визуальный стиль приложения должен быть приближен к стилю офисных приложений, возможны свои доработки\добавления.

#### 3.2.2 Требования к удобству

Уведомления об запланированных событиях в панели уведомлений.

#### 3.2.3 Ограничения

1. Язык программирования С++
2. Ui пишется в qt версии 6.0.3
3. База данных Sqlite3
