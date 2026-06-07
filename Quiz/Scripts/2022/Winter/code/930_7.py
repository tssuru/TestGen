try:
    
    try:
        print(4, end="")
        print(int(5//0.0), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(3, end="")
    
except: print('error')
