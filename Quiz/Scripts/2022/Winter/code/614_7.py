try:
    
    try:
        print(4, end="")
        print(int("8"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
