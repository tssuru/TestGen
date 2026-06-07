try:
    
    try:
        print(4, end="")
        print(int("7"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
