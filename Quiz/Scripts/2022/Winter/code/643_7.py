try:
    
    try:
        print(2, end="")
        print(int(5/2), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
