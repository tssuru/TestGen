try:
    
    try:
        print(7, end="")
        print(int(3%0.0), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
