try:
    
    a,b,c=8,9,6
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(5,c=2)
    print(a,b,c)
    
except: print('error')
