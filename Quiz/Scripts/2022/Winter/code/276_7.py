try:
    
    try:
        print(4, end="")
        print(int("9"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
