try:
    
    try:
        print(8, end="")
        print(int("d7"), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
