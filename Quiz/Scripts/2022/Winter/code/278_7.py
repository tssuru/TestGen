try:
    
    try:
        print(0, end="")
        print(int(0/1), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
