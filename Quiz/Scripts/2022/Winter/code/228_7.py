try:
    
    try:
        print(3, end="")
        print(1>=7, end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
