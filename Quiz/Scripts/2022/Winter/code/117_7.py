try:
    
    try:
        print(6, end="")
        print(int(4//2), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
