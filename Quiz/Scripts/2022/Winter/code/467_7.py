try:
    
    try:
        print(8, end="")
        print(int("7"), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
