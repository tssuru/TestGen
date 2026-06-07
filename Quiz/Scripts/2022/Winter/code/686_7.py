try:
    
    try:
        print(0, end="")
        print(int(5/2), end="")
        print(9, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
