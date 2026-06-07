try:
    
    try:
        print(9, end="")
        print(int(6/1), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
