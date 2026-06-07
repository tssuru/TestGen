try:
    
    try:
        print(9, end="")
        print(int(8/0.0), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
