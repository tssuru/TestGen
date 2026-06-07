try:
    
    try:
        print(6, end="")
        print(int("a0"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
