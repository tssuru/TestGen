try:
    
    try:
        print(6, end="")
        print(int(2/1), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
