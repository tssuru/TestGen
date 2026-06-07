try:
    
    try:
        print(4, end="")
        print(int(7%2), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
