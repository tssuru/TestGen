try:
    
    try:
        print(8, end="")
        print(5<3, end="")
        print(0, end="")
    except ValueError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
