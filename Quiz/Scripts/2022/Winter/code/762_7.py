try:
    
    try:
        print(1, end="")
        print(int("8"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
