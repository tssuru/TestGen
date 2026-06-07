try:
    
    try:
        print(5, end="")
        print(int("c0"), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
