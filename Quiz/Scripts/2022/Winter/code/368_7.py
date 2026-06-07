try:
    
    try:
        print(8, end="")
        print(int("d6"), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
