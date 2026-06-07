try:
    
    try:
        print(4, end="")
        print(int(6/3), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
