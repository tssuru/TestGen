try:
    
    try:
        print(3, end="")
        print(int("6"), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
