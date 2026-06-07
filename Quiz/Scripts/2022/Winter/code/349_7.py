try:
    
    try:
        print(6, end="")
        print(4!=3, end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
