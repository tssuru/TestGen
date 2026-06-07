try:
    
    try:
        print(4, end="")
        print(int(5/3), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
