try:
    
    try:
        print(9, end="")
        print(int(0/0), end="")
        print(2, end="")
    except ValueError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
