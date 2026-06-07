try:
    
    try:
        print(8, end="")
        print(int(8%2), end="")
        print(6, end="")
    except ValueError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
