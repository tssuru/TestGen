try:
    
    try:
        print(4, end="")
        print(int(8%0), end="")
        print(7, end="")
    except ValueError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
