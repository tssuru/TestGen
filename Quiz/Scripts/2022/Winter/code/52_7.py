try:
    
    try:
        print(3, end="")
        print(int("1"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
