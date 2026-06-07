try:
    
    try:
        print(4, end="")
        print(int("0"), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
