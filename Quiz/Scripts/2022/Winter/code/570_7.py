try:
    
    try:
        print(9, end="")
        print(int("b1"), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
