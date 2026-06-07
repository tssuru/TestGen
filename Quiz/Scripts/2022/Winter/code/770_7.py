try:
    
    try:
        print(5, end="")
        print(int("9"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
