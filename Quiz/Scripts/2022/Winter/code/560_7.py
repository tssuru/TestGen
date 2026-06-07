try:
    
    try:
        print(7, end="")
        print(4<=2, end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
