try:
    
    try:
        print(0, end="")
        print(int("7"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
