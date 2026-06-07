try:
    
    try:
        print(7, end="")
        print(int("c2"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
