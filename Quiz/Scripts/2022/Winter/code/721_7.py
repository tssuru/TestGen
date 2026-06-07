try:
    
    try:
        print(3, end="")
        print(int("d7"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
