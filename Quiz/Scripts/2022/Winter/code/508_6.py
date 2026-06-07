try:
    a,b,c=3,2,6
    def h(a):
        a-=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=8,4,9
    print(h(a),a,b,c)
    
except: print('error')
