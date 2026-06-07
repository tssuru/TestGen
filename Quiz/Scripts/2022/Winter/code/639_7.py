try:
    
    try:
        print(6, end="")
        print(int(7//3), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
