try:
    
    try:
        print(1, end="")
        print(int(2//3), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
