try:
    a,b,c=4,6,0
    def h(a):
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=5,7,1
    print(h(a),a,b,c)
except: print('error')
