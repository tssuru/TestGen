try:
    
    try:
        print(3, end="")
        print(int("b0"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
