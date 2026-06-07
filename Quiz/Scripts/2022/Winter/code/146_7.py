try:
    
    try:
        print(4, end="")
        print(int("3"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
