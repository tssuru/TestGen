try:
    a,b,c=9,6,7
    def h(a,b=8,c=7):
        print(a,b,c,end=" ")
    
    h(b=3,c=4,5)
    print(a,b,c)
    
except: print('error')
