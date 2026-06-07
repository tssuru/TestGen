try:
    
    try:
        print(8, end="")
        print(6<=3, end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
