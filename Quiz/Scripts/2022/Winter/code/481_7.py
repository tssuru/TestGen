try:
    
    try:
        print(5, end="")
        print(int(0//0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
