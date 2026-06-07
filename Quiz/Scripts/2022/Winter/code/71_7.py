try:
    
    try:
        print(0, end="")
        print(int("4"), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
