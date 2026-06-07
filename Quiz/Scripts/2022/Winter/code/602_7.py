try:
    
    try:
        print(7, end="")
        print(int("d9"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
