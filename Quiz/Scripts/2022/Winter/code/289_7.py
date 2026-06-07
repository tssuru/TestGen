try:
    
    try:
        print(4, end="")
        print(int(1%0.0), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
