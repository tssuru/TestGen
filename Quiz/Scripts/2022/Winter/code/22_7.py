try:
    
    try:
        print(5, end="")
        print(0<=0, end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
