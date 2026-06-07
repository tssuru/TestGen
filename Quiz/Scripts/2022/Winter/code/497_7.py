try:
    
    try:
        print(3, end="")
        print(int("0"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(9, end="")
    
except: print('error')
